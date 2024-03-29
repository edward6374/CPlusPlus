/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateriaNode.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vduchi <vduchi@student.42barcelona.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/15 17:41:50 by vduchi            #+#    #+#             */
/*   Updated: 2023/12/23 21:03:07 by vduchi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIANODE_HPP
# define AMATERIANODE_HPP

# include <iostream>
# include "AMateria.hpp"

class AMateriaNode
{

	private:
		AMateria* _mat;
		AMateriaNode* _bef;
		AMateriaNode* _next;

	public:
		AMateriaNode();
		AMateriaNode(AMateria*);
		AMateriaNode(AMateriaNode const &);
		AMateriaNode& operator=(AMateriaNode const &);
		~AMateriaNode();

		void setMat(AMateria*);
		void setBef(AMateriaNode*);
		void setNext(AMateriaNode*);
		AMateria* getMat() const;
		AMateriaNode* getBef() const;
		AMateriaNode* getNext() const;
};

#endif

